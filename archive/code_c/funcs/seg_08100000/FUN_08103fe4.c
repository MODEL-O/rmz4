// undefined FUN_08103fe4(void)
// entry 0x8103fe4


undefined4 FUN_08103fe4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08104010;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(DAT_08104010 + DAT_08104014) = DAT_08104018;
    *(undefined4 *)(iVar1 + DAT_0810401c) = DAT_08104020;
    if (*(int *)(param_1 + 0x60) < 1) {
      FUN_0801cf00(param_1,DAT_08104080);
    }
    else {
      FUN_0801cf00(param_1,DAT_08104024);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar1 = FUN_08002bb4(0x1ae);
  if (iVar1 == 0) {
    FUN_08002b10(0x1ae);
    *(undefined2 *)(param_1 + 0xb4) = 0x1ae;
  }
  if (*(int *)(param_1 + 0x60) < 1) {
    iVar2 = *(byte *)(param_1 + 0x11) - 1;
    iVar3 = *(int *)(param_1 + 0x68);
    iVar1 = DAT_081040bc;
    if ((int)(iVar3 + (uint)*(ushort *)(iVar2 * 2 + DAT_081040bc) * 0x100) <
        *(int *)(param_1 + 0x58)) {
      return in_lr;
    }
  }
  else {
    iVar2 = *(byte *)(param_1 + 0x11) + 1;
    iVar3 = *(int *)(param_1 + 0x68);
    iVar1 = DAT_08104084;
    if (*(int *)(param_1 + 0x58) <
        (int)(iVar3 + (uint)*(ushort *)(iVar2 * 2 + DAT_08104084) * 0x100)) {
      return in_lr;
    }
  }
  *(char *)(param_1 + 0x11) = (char)iVar2;
  *(uint *)(param_1 + 0x58) =
       iVar3 + (uint)*(ushort *)((uint)*(byte *)(param_1 + 0x11) * 2 + iVar1) * 0x100;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


