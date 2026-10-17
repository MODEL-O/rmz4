// undefined FUN_0810b3fc(void)
// entry 0x810b3fc


undefined4 FUN_0810b3fc(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar4 + 3)) ||
     (((*(byte *)(iVar4 + 3) == 1 && (*(char *)(iVar4 + 0xdd0) != *(char *)(param_1 + 0x11))) &&
      (2 < *(byte *)(iVar4 + 0xdf7))))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(iVar4 + 0xdd0) == *(char *)(param_1 + 0x11)) goto LAB_0810b488;
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_0810b494 + 2));
    uVar1 = 1;
  }
  else {
    if (*(char *)(iVar4 + 0xdd0) != *(char *)(param_1 + 0x11)) goto LAB_0810b488;
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_0810b460));
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar1;
LAB_0810b488:
  if (*(char *)(param_1 + 0x11) == '\x03') {
    uVar2 = 0x7000;
  }
  else {
    uVar2 = 0x5800;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(uint *)(param_1 + 0x58) = ((uint)*(byte *)(param_1 + 0x11) * 0x20 + 8) * 0x100;
  iVar3 = *(int *)(param_1 + 0x54) + 0x10000;
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x54) =
       iVar3 - *(short *)(iVar4 + DAT_0810b4d0 + (uint)*(byte *)(param_1 + 0x11) * 2);
  FUN_0801cff0(param_1);
  return in_lr;
}


