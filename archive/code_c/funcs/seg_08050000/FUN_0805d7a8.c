// undefined FUN_0805d7a8(void)
// entry 0x805d7a8


undefined4 FUN_0805d7a8(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [4];
  
  FUN_08129258(auStack_34,DAT_0805d920,6);
  FUN_08129258(auStack_2c,DAT_0805d924,6);
  FUN_081292b8(auStack_24,0,3);
  uVar2 = (uint)*(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    FUN_0805ee6c(param_1,auStack_34[uVar2 * 2]);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0xd4);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb4) + DAT_0805d928;
    uVar3 = FUN_0810d3ac(param_1 + 0x54,param_1 + 100);
    iVar5 = DAT_0805d92c;
    iVar4 = *(short *)((uVar3 + 0x40 & 0xff) * 2 + DAT_0805d92c) * 3;
    *(int *)(param_1 + 0x5c) = iVar4;
    *(int *)(param_1 + 0x60) = *(short *)((uVar3 & 0xff) * 2 + iVar5) * 3;
    iVar5 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x54);
    cVar1 = FUN_08128fb8(iVar5,iVar4);
    *(char *)(param_1 + 0x12) = cVar1;
    iVar4 = FUN_08129050(iVar5,iVar4);
    if (iVar4 != 0) {
      *(char *)(param_1 + 0x12) = cVar1 + '\x01';
    }
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
    FUN_0805ee6c(param_1,auStack_2c[uVar2 * 2]);
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805d934) * 4 +
                               DAT_0805d930)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805d938) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 100) + -*(int *)(param_1 + 0x5c) * (uint)*(byte *)(param_1 + 0x12);
  *(uint *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x68) + -*(int *)(param_1 + 0x60) * (uint)*(byte *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = auStack_24[uVar2];
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


