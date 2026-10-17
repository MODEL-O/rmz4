// undefined FUN_080117f4(void)
// entry 0x80117f4


undefined4 FUN_080117f4(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08011854;
  uVar3 = *(uint *)(DAT_08011858 + DAT_0801185c) * DAT_08011860 + DAT_08011864;
  *(uint *)(DAT_08011858 + DAT_0801185c) = uVar3;
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)((uVar3 >> 0x10 & 0x1f) * 2 + iVar1);
  piVar2 = DAT_08011868;
  FUN_08001ea4(*DAT_08011868 + DAT_0801186c,0x4000);
  FUN_08002208(*piVar2 + DAT_08011870,0);
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(char *)(DAT_08011874 + DAT_08011878) = *(char *)(DAT_08011874 + DAT_08011878) + '\x01';
  return in_lr;
}


