// undefined FUN_0806e974(void)
// entry 0x806e974


undefined4 FUN_0806e974(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0800249c(0x77,0x2a0);
    FUN_08005784(param_1 + 0x74,DAT_0806e9cc);
    *(undefined4 *)(param_1 + 100) = 0x268;
    *(undefined1 *)(param_1 + 0x12) = 0;
    iVar1 = *DAT_0806e9d0;
    if (*(int *)(iVar1 + 0x58) + DAT_0806e9d4 < *(int *)(param_1 + 0xb8) + DAT_0806e9d8) {
      uVar2 = 2;
      if (*(int *)(iVar1 + 0x54) < *(int *)(param_1 + 0xbc) + 0x6800) {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x54) < *(int *)(param_1 + 0xbc) + 0x6800) {
        uVar2 = 1;
      }
    }
    *(undefined1 *)(param_1 + 0x13) = uVar2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_080025d8(0x77);
  iVar1 = FUN_08129050(*(undefined4 *)(param_1 + 100),0x1c);
  if (iVar1 == 0) {
    iVar1 = (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0x13) * 4 + DAT_0806ea74) +
                           (uint)*(byte *)(param_1 + 0x12)) * 8;
    local_14 = *(int *)(param_1 + 0xbc) + *(int *)(iVar1 + DAT_0806ea78) + 0x6800;
    local_10 = *(int *)(param_1 + 0xb8) + *(int *)(iVar1 + DAT_0806ea78 + 4) + DAT_0806ea7c;
    FUN_080a5888(param_1,&local_14,1,0);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  iVar1 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar1;
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


