// undefined FUN_080ed5f0(void)
// entry 0x80ed5f0


undefined4 FUN_080ed5f0(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       ((int)((uint)*(ushort *)
                     (((uint)*(byte *)(param_1 + 0x12) * 0x10000000 + 0x40000000 >> 0x17) +
                     DAT_080ed674) << 0x10) >> 0x12);
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  iVar4 = *(int *)(param_1 + 0x60) + -0x20;
  *(int *)(param_1 + 0x60) = iVar4;
  iVar2 = iVar2 + DAT_080ed678;
  uVar5 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar5;
  if (((uVar5 & 0xff) == 0xff) || ((iVar2 < *(int *)(DAT_080ed67c + DAT_080ed680) && (iVar4 < 0))))
  {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ed684);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  return in_lr;
}


