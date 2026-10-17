// undefined FUN_0809bfa8(void)
// entry 0x809bfa8


undefined4 FUN_0809bfa8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  byte abStack_14 [4];
  
  FUN_08129258(abStack_14,DAT_0809bff0,4);
  iVar5 = DAT_0809bff4;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar7 = (uint)bVar1 * 8;
    iVar4 = *(int *)(iVar7 + DAT_0809bff4);
    iVar2 = -iVar4;
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar5 = -*(int *)(iVar7 + iVar5 + 4);
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0xb4);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb8);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x58);
    }
    else {
      iVar4 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
      iVar5 = iVar2;
    }
    uVar3 = FUN_08128fb8(iVar4,iVar5);
    *(undefined1 *)(param_1 + 0x12) = uVar3;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) << 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)abStack_14[bVar1] * 4 + DAT_0809c078)));
  uVar6 = (uint)(*(byte *)(param_1 + 0x12) >> 1);
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 100) - uVar6 * *(int *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x60) * uVar6;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


