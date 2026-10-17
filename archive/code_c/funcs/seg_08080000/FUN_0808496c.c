// undefined FUN_0808496c(void)
// entry 0x808496c


undefined4 FUN_0808496c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 0;
  psVar3 = DAT_080849e8;
  do {
    iVar2 = FUN_080054cc(*DAT_080849ec);
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x25) = 0x18;
      iVar1 = DAT_080849f0;
      *(undefined1 *)(iVar2 + 9) = 5;
      *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x14);
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined1 *)(iVar2 + 0x22) = 0;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
      *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
      *(undefined1 *)(iVar2 + 0x10) = 2;
      *(char *)(iVar2 + 0x11) = (char)iVar4;
      *(int *)(iVar2 + 0x54) = param_1;
      *(int *)(iVar2 + 0x54) = param_1 + *psVar3;
      *(int *)(iVar2 + 0x58) = param_2;
      *(int *)(iVar2 + 0x58) = param_2 + psVar3[1];
    }
    psVar3 = psVar3 + 2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return in_lr;
}


