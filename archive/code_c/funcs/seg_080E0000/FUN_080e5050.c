// undefined FUN_080e5050(void)
// entry 0x80e5050


undefined4 FUN_080e5050(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined2 auStack_1c [2];
  byte abStack_18 [4];
  
  FUN_08129258(auStack_1c,DAT_080e5150,4);
  FUN_08129258(abStack_18,DAT_080e5154,2);
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_080d0ff4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
    FUN_080d0ff4(*(int *)(param_1 + 0x54) + 0x200,*(undefined4 *)(param_1 + 0x58),0);
    FUN_080d0ff4(*(int *)(param_1 + 0x54) + DAT_080e5158,*(undefined4 *)(param_1 + 0x58),0);
    iVar2 = param_1 + 0x54;
    FUN_080d0dc4(0,iVar2,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e4f04(iVar2,0,1);
    FUN_080e4f04(iVar2,1,0);
    *(undefined1 *)(param_1 + 0x25) = 0x18;
  }
  FUN_0801cf00(param_1,auStack_1c[*(byte *)(param_1 + 0x11)]);
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080e515c;
  }
  iVar2 = DAT_080e5160;
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((abStack_18[*(byte *)(param_1 + 0x11)] + 0x40 & 0xff) * 2 + DAT_080e5160) / 2
  ;
  iVar2 = ((int)*(short *)((uint)abStack_18[*(byte *)(param_1 + 0x11)] * 2 + iVar2) / 2) * -0x100;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar2 >> 8;
  if (*(int *)(DAT_080e5164 + DAT_080e5168) < *(int *)(param_1 + 0x58) + DAT_080e516c) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0x40;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar2 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  }
  uVar1 = *DAT_080e51bc * DAT_080e51c0 + DAT_080e51c4;
  *DAT_080e51bc = uVar1 & 0x7fffffff;
  *(byte *)(param_1 + 0x13) = ((byte)(uVar1 >> 0x10) & 0x1f) + 0x1e;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return in_lr;
}


