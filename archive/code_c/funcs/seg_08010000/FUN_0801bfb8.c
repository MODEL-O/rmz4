// undefined FUN_0801bfb8(void)
// entry 0x801bfb8


undefined4 FUN_0801bfb8(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_0801c018;
  uVar3 = *(uint *)(DAT_0801c01c + DAT_0801c020) * DAT_0801c024 + DAT_0801c028;
  *(uint *)(DAT_0801c01c + DAT_0801c020) = uVar3;
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)((uVar3 >> 0x10 & 0x1f) * 2 + iVar1);
  piVar2 = DAT_0801c02c;
  FUN_08001ea4(*DAT_0801c02c + DAT_0801c030,0x4000);
  FUN_08002208(*piVar2 + DAT_0801c034,0);
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(char *)(DAT_0801c038 + DAT_0801c03c) = *(char *)(DAT_0801c038 + DAT_0801c03c) + '\x01';
  return in_lr;
}


