// undefined FUN_080118a4(void)
// entry 0x80118a4


undefined4 FUN_080118a4(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08011904;
  uVar3 = *(uint *)(DAT_08011908 + DAT_0801190c) * DAT_08011910 + DAT_08011914;
  *(uint *)(DAT_08011908 + DAT_0801190c) = uVar3;
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)((uVar3 >> 0x10 & 0x1f) * 2 + iVar1);
  piVar2 = DAT_08011918;
  FUN_08001ea4(*DAT_08011918 + DAT_0801191c,0x4000);
  FUN_08002208(*piVar2 + DAT_08011920,0);
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(char *)(DAT_08011924 + DAT_08011928) = *(char *)(DAT_08011924 + DAT_08011928) + '\x01';
  return in_lr;
}


