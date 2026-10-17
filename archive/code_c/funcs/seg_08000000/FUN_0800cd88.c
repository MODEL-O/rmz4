// undefined FUN_0800cd88(void)
// entry 0x800cd88


undefined4 FUN_0800cd88(int param_1)

{
  short sVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 in_lr;
  
  iVar4 = DAT_0800cdc0;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    *(ushort *)(uVar3 * 2 + DAT_0800cdc0) =
         (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) |
         (ushort)DAT_0800cdc4;
    *(undefined4 *)(uVar3 * 4 + iVar4 + 8) = 0;
    puVar2 = DAT_0800cdc8;
    *DAT_0800cdc8 = (short)DAT_0800cdcc;
    puVar2[1] = (short)DAT_0800cdd0;
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0800ce24;
    puVar5 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_0800ce3c);
    FUN_08128be0(*DAT_0800ce34 + DAT_0800ce38,(*puVar5 & 0x1f00) * 8 + 0x6000000,0x200);
    FUN_08128be0(*DAT_0800ce40 + DAT_0800ce44,(*puVar5 & 0x1f00) * 8 + DAT_0800ce48,0x200);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0800ce24:
  iVar4 = (*(int *)(param_1 + 0x34) + DAT_0800ce4c) * 0x10;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0x800 < iVar4) {
    iVar4 = 0x800;
  }
  sVar1 = (short)((uint)iVar4 >> 8);
  if (iVar4 < 0x401) {
    *(ushort *)(DAT_0800ce9c + 2) = 8U - sVar1 & 0x1f | 0xc00;
  }
  else {
    *(ushort *)(DAT_0800ce7c + 2) = 8U - sVar1 & 0x1f | ((short)(iVar4 >> 9) + 0xc) * 0x100;
  }
  return in_lr;
}


