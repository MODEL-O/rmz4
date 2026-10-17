// undefined FUN_080849f4(void)
// entry 0x80849f4


undefined4 FUN_080849f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 0;
  psVar3 = DAT_08084a70;
  do {
    iVar2 = FUN_080054cc(*DAT_08084a74);
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x25) = 0x18;
      iVar1 = DAT_08084a78;
      *(undefined1 *)(iVar2 + 9) = 5;
      *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x14);
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined1 *)(iVar2 + 0x22) = 0;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
      *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
      *(undefined1 *)(iVar2 + 0x10) = 3;
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


