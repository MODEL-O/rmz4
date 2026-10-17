// undefined FUN_080e4b6c(void)
// entry 0x80e4b6c


undefined4 FUN_080e4b6c(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = param_1 + 0x54;
    FUN_080d0dc4(0,iVar2,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e4a54(iVar2,1,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e4a54(iVar2,2,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e4a54(iVar2,3,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  if (*(byte *)(param_1 + 0x11) < 2) {
    *(undefined1 *)(param_1 + 0x25) = 0x18;
  }
  *(undefined4 *)(param_1 + 0x5c) =
       *(undefined4 *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080e4c30);
  iVar2 = DAT_080e4c34;
  *(int *)(param_1 + 0x60) = DAT_080e4c34;
  if (*(byte *)(param_1 + 0x11) < 2) {
    *(int *)(param_1 + 0x60) = iVar2 << 1;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  }
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080e4c38));
  uVar1 = *DAT_080e4c3c * DAT_080e4c40 + DAT_080e4c44;
  *DAT_080e4c3c = uVar1 & 0x7fffffff;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar1 >> 0x10) & 0x1f) + 0x14;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return in_lr;
}


