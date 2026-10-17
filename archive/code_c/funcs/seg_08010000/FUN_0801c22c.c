// undefined FUN_0801c22c(void)
// entry 0x801c22c


undefined4 FUN_0801c22c(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_0801c28c;
  uVar3 = *(uint *)(DAT_0801c290 + DAT_0801c294) * DAT_0801c298 + DAT_0801c29c;
  *(uint *)(DAT_0801c290 + DAT_0801c294) = uVar3;
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)((uVar3 >> 0x10 & 0x1f) * 2 + iVar1);
  piVar2 = DAT_0801c2a0;
  FUN_08001ea4(*DAT_0801c2a0 + DAT_0801c2a4,0x4000);
  FUN_08002208(*piVar2 + DAT_0801c2a8,0);
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(char *)(DAT_0801c2ac + DAT_0801c2b0) = *(char *)(DAT_0801c2ac + DAT_0801c2b0) + '\x01';
  return in_lr;
}


