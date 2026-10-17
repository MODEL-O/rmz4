// undefined FUN_0809be20(void)
// entry 0x809be20


undefined4 FUN_0809be20(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_28 [4];
  byte abStack_18 [4];
  
  local_28[0] = *DAT_0809bf20;
  local_28[1] = DAT_0809bf20[1];
  local_28[2] = DAT_0809bf20[2];
  local_28[3] = DAT_0809bf20[3];
  FUN_08129258(abStack_18,DAT_0809bf24,4);
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)(local_28 + uVar3));
    *(undefined1 *)(param_1 + 0x12) = 6;
    iVar2 = DAT_0809bf28;
    iVar1 = *(int *)(uVar3 * 8 + DAT_0809bf28);
    *(int *)(param_1 + 0x5c) = iVar1;
    iVar2 = *(int *)(uVar3 * 8 + iVar2 + 4);
    *(int *)(param_1 + 0x60) = iVar2;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) + iVar1 * 5;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + iVar2 * 5;
    *(undefined1 *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)abStack_18[uVar3] * 4 + DAT_0809bf2c)));
  uVar3 = (uint)(*(byte *)(param_1 + 0x12) >> 1);
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 100) - uVar3 * *(int *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) - uVar3 * *(int *)(param_1 + 0x60);
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    FUN_080664bc(param_1 + 0x54,0,0);
  }
  if (((*(char *)(param_1 + 0x12) == '\0') || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) ||
     (iVar2 = FUN_0809c3cc(param_1), iVar2 != 0)) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


