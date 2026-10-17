// undefined FUN_0808b210(void)
// entry 0x808b210


void FUN_0808b210(int param_1,byte param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(param_1 + 0xb5);
  bVar1 = *pbVar2;
  *pbVar2 = bVar1 + 1;
  if (param_2 <= (byte)(bVar1 + 1)) {
    *pbVar2 = 0;
    FUN_08002b10(DAT_0808b234);
  }
  return;
}


