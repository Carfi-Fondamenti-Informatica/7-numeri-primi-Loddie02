
bool isNumeroPrimo(int num, int counter){
    return num%counter==0 ? num==counter : isNumeroPrimo(num,counter+1);
}
