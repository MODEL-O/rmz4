// undefined FUN_080d0a5c(void)
// entry 0x80d0a5c


undefined4 FUN_080d0a5c(int param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  *(byte *)(param_1 + 10) = bVar2 | 2;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d0ae8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = bVar2 | 6;
  FUN_08005760(param_1 + 0x74,DAT_080d0aec,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar3 = *DAT_080d0af0;
  *(int *)(param_1 + 0x54) =
       *(int *)(iVar3 + 0x54) +
       *(int *)(((int)-(*(byte *)(iVar3 + 10) & 0x10) >> 0x1f & 4U) + DAT_080d0af4) * 0x100;
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + DAT_080d0af8;
  *(undefined1 *)(param_1 + 0x12) = 0x14;
  return in_lr;
}


