// undefined FUN_0801c17c(void)
// entry 0x801c17c


undefined4 FUN_0801c17c(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_0801c1dc;
  uVar3 = *(uint *)(DAT_0801c1e0 + DAT_0801c1e4) * DAT_0801c1e8 + DAT_0801c1ec;
  *(uint *)(DAT_0801c1e0 + DAT_0801c1e4) = uVar3;
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)((uVar3 >> 0x10 & 0x1f) * 2 + iVar1);
  piVar2 = DAT_0801c1f0;
  FUN_08001ea4(*DAT_0801c1f0 + DAT_0801c1f4,0x4000);
  FUN_08002208(*piVar2 + DAT_0801c1f8,0);
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(char *)(DAT_0801c1fc + DAT_0801c200) = *(char *)(DAT_0801c1fc + DAT_0801c200) + '\x01';
  return in_lr;
}


