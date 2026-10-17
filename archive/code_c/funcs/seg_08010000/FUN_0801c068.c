// undefined FUN_0801c068(void)
// entry 0x801c068


undefined4 FUN_0801c068(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_0801c0c8;
  uVar3 = *(uint *)(DAT_0801c0cc + DAT_0801c0d0) * DAT_0801c0d4 + DAT_0801c0d8;
  *(uint *)(DAT_0801c0cc + DAT_0801c0d0) = uVar3;
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)((uVar3 >> 0x10 & 0x1f) * 2 + iVar1);
  piVar2 = DAT_0801c0dc;
  FUN_08001ea4(*DAT_0801c0dc + DAT_0801c0e0,0x4000);
  FUN_08002208(*piVar2 + DAT_0801c0e4,0);
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(char *)(DAT_0801c0e8 + DAT_0801c0ec) = *(char *)(DAT_0801c0e8 + DAT_0801c0ec) + '\x01';
  return in_lr;
}


