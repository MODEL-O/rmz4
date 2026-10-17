// undefined FUN_0800cf20(void)
// entry 0x800cf20


undefined4 FUN_0800cf20(int param_1)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar3 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_0800cfcc);
    uVar1 = *(uint *)(param_1 + 100) | DAT_0800cfd0;
    *puVar3 = (ushort)uVar1;
    local_20[0] = 0;
    FUN_08128be0(local_20,(uVar1 & 0x1f00) * 8 + 0x6000000,DAT_0800cfd4);
    FUN_08128be0(*DAT_0800cfd8 + DAT_0800cfdc,(*puVar3 & 0x1f00) * 8 + DAT_0800cfe0,0x200);
    puVar3 = DAT_0800cfe4;
    *DAT_0800cfe4 = *DAT_0800cfe4 | 0x4000;
    *(undefined1 *)((int)puVar3 + 0xd) = 0xfb;
    puVar3[3] = 0;
    puVar3[5] = 0xff;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = (*(int *)(DAT_0800cfe8 + DAT_0800cfec) >> 8) - *(int *)(param_1 + 0x34);
  uVar1 = iVar2 - 0x50;
  if (((int)uVar1 < 0) && (DAT_0800cff0 < (int)uVar1)) {
    DAT_0800cfe4[3] = ((short)iVar2 + 0xaf) * 0x100 | 0xff;
  }
  else if (uVar1 < 0x100) {
    *(ushort *)(DAT_0800d004 + 6) = (ushort)uVar1 & 0xff;
  }
  else {
    *(undefined2 *)(DAT_0800d01c + 6) = 0xff;
  }
  return in_lr;
}


