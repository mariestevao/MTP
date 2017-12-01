#include <stdio.h>
struct Pixel
{
    unsigned char R;
    unsigned char G;
    unsigned char B;
};
int main()
{
    struct Pixel pixel, pixel2;
    int WPX, HPX, BPP, NIC, NCP, PAL, lap, offset;
    int i;
    unsigned char byte;
    unsigned short word; //2 bytes
    unsigned int dword;
    FILE * imagem;
    FILE * nova;
    imagem = fopen("pikachu.bmp", "r");
    nova = fopen("pikachu2.bmp", "w");
    printf("-----------------DADOS------------------");
    //2 bytes	0-1	Se for Windows, 'B' e 'M'
    fread(&byte, sizeof(byte), 1, imagem);
    fwrite(&byte, sizeof(byte), 1, nova);
    printf("\n%c", byte);
    fread(&byte, sizeof(byte), 1, imagem);
    fwrite(&byte, sizeof(byte), 1, nova);
    printf("%c\n", byte);
    //dword	2-5	Tamanho do arquivo (bytes)
    fread(&dword, sizeof(dword), 1, imagem);
    fwrite(&dword, sizeof(dword), 1, nova);
    printf("Tamanho do arquivo: (bytes) %u\n", dword);
    //word	6-7	Informação reservada
    //word	8-9	Informação reservada
    fread(&dword, sizeof(dword), 1, imagem);
    fwrite(&dword, sizeof(dword), 1, nova);
    printf("Informacao reservada: (bytes) %08X\n", dword);
    //dword	10-13	Offset, onde dados da imagem começam
    fread(&dword, sizeof(dword), 1, imagem);
    fwrite(&dword, sizeof(dword), 1, nova);
    printf("Offset:  %u\n", dword);
    offset = dword;
    //dword	14-17	Tamanho do cabeçalho, a partir daqui
    fread(&dword, sizeof(dword), 1, imagem);
    fwrite(&dword, sizeof(dword), 1, nova);
    printf("Tamanho do cabeçalho, a partir daqui:  %u\n", dword);
    //dword	18-21	Largura da imagem (pixels), WPX
    fread(&dword, sizeof(dword), 1, imagem);
    fwrite(&dword, sizeof(dword), 1, nova);
    printf("Largura da imagem:  %u\n", dword);
    WPX = dword;
    //dword	22-25	Altura da imagem (pixels), HPX
    fread(&dword, sizeof(dword), 1, imagem);
    fwrite(&dword, sizeof(dword), 1, nova);
    printf("Altura da imagem:  %u\n", dword);
    HPX = dword;
    //word	26-27	Qtde de planos de cores
    fread(&word, sizeof(word), 1, imagem);
    fwrite(&word, sizeof(word), 1, nova);
    printf("Qtde de planos de cores:  %u\n", word);
    //word	28-29	Bits por pixel, BPP
    fread(&word, sizeof(word), 1, imagem);
    fwrite(&word, sizeof(word), 1, nova);
    printf("Bits por pixel:  %u\n", word);
    BPP = word;
    //dword	30-33	Método de compressão
    fread(&dword, sizeof(dword), 1, imagem);
    fwrite(&dword, sizeof(dword), 1, nova);
    printf("Método de compressao:  %u\n", dword);
    //dword	34-37	Tamanho da imagem
    fread(&dword, sizeof(dword), 1, imagem);
    fwrite(&dword, sizeof(dword), 1, nova);
    printf("Tamanho da imagem:  %u\n", dword);
    //dword	38-41	Resolução horizontal
    fread(&dword, sizeof(dword), 1, imagem);
    fwrite(&dword, sizeof(dword), 1, nova);
    printf("Resolucao horizontal:  %u\n", dword);
    //dword	42-45	Resolução vertical
    fread(&dword, sizeof(dword), 1, imagem);
    fwrite(&dword, sizeof(dword), 1, nova);
    printf("Resolucao vertical:  %u\n", dword);
    //dword	46-49	Número de cores na paleta, NCP
    fread(&dword, sizeof(dword), 1, imagem);
    fwrite(&dword, sizeof(dword), 1, nova);
    NCP = (dword==0) ? 1 << BPP : dword;
    printf("Numero de cores na paleta:  %u\n", NCP);
    //dword	50-53	Número de cores importantes, NIC
    fread(&dword, sizeof(dword), 1, imagem);
    fwrite(&dword, sizeof(dword), 1, nova);
    NIC = (dword==0) ? NCP : dword;
    printf("Numero de cores importantes:  %u\n", NIC);
    printf("\n----------------------------------------\n");
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    printf("\n%d", PAL);
    rewind(imagem);
    for(i=0; i< offset; i++)
    {
        fread(&pixel, sizeof(pixel), 1, imagem);
        fwrite(&pixel, sizeof(pixel), 1, nova);
    }
    printf("\nPixels:\n");
    while(!feof(imagem))
    {
        if(fread(&pixel, sizeof(pixel), 1, imagem))
        {
            pixel2.R = pixel.G;
            pixel2.G = pixel.R;
            pixel2.B = pixel.B;
            fwrite(&pixel2, sizeof(pixel2),1,nova);
        }
        lap = lap + 3;
        if((lap + 3) > PAL)
        {
            fseek(imagem, (PAL - lap), SEEK_CUR);
            for(i=0; i < PAL - lap; i++)
                fwrite(&byte, sizeof(byte),1,nova);
            lap = 0;
        }
    }
    fclose(imagem);
    fclose(nova);
    return 0;
}