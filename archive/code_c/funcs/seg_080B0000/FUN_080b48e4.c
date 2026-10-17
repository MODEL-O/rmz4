// undefined FUN_080b48e4(void)
// entry 0x80b48e4


undefined4 FUN_080b48e4(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 & 0xfe;
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + DAT_080b4914;
  bVar5 = *(byte *)(param_1 + 0xbc);
  if ((bVar1 & 0x10) != 0) {
    bVar5 = bVar5 | 0x10;
  }
  FUN_080d4c8c(&local_18,DAT_080b4918,0,bVar5);
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar2 = DAT_080b4978 * *DAT_080b4974 + DAT_080b497c;
    iVar4 = ((uVar2 & 0x7fffffff) >> 0x10 & 1) * 0x1c + DAT_080b4980;
    uVar2 = DAT_080b4978 * (uVar2 & 0x7fffffff) + DAT_080b497c;
    *DAT_080b4974 = uVar2 & 0x7fffffff;
    FUN_080d4c8c(&local_18,iVar4,0,
                 ((uVar2 & 0x7fffffff) >> 0x10 & 1) << 4 | (uint)*(byte *)(param_1 + 0xbc));
  }
  else {
    uVar2 = DAT_080b49ec * *DAT_080b49e8 + DAT_080b49f0;
    iVar4 = ((uVar2 & 0x7fffffff) >> 0x10 & 1) * 0x1c + DAT_080b49f4;
    uVar2 = DAT_080b49ec * (uVar2 & 0x7fffffff) + DAT_080b49f0;
    *DAT_080b49e8 = uVar2 & 0x7fffffff;
    FUN_080d4c8c(&local_18,iVar4,0,
                 ((uVar2 & 0x7fffffff) >> 0x10 & 1) << 4 | (uint)*(byte *)(param_1 + 0xbc));
  }
  FUN_080d0c88(1,&local_18);
  FUN_08002b10(0x2a);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0802ab88(3,0x29,&local_18);
  }
  else {
    FUN_0802ab88(3,0x28,&local_18);
  }
  if (*(ushort *)(DAT_080b4a34 + 0xc) <= DAT_080b4a38) {
    *(ushort *)(DAT_080b4a34 + 0xc) = *(ushort *)(DAT_080b4a34 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b4a3c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  return in_lr;
}


