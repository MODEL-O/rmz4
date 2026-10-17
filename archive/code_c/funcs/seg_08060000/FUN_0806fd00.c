// undefined FUN_0806fd00(void)
// entry 0x806fd00


undefined4 FUN_0806fd00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(*DAT_0806fd1c + 0x54) < *(int *)(param_1 + 0x54)) {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x12) = 1;
    }
    if (*(char *)(*(int *)(param_1 + 0xbc + (uint)*(byte *)(param_1 + 0x12) * 4) + 0xd) != '\0') {
      FUN_0801cff0(param_1);
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0806fd60);
    *(undefined1 *)(*(int *)(param_1 + 0xbc + (uint)*(byte *)(param_1 + 0x12) * 4) + 0xbe) = 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      uVar1 = 2;
    }
    else {
      uVar1 = 0xfffffffe;
    }
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0x68) = 4;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * -0x20;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    *(undefined1 *)(param_1 + 0x13) = 0;
    FUN_08002b10(DAT_0806fd8c);
    *(undefined1 *)(param_1 + 0xf) = 0;
LAB_0806fdaa:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if ((*(char *)(param_1 + 0xe) == '\x01') && (*(char *)(param_1 + 0x73) == '\x03')) {
    FUN_0801cf00(param_1,DAT_0806fdd8);
    goto LAB_0806fdaa;
  }
  FUN_0801cff0(param_1);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  if (*(int *)(param_1 + 100) < 1) {
    iVar2 = *(int *)(param_1 + 0xb4);
    if (iVar2 <= iVar3) goto LAB_0806fdea;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb4);
    if (iVar3 <= iVar2) goto LAB_0806fdea;
  }
  *(int *)(param_1 + 0x54) = iVar2;
LAB_0806fdea:
  iVar3 = *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x58) + iVar3;
  *(int *)(param_1 + 0x58) = iVar2;
  if (iVar3 < 0) {
    *(int *)(param_1 + 0x60) = iVar3 + *(int *)(param_1 + 0x68);
  }
  else {
    *(int *)(param_1 + 0x60) = iVar3 + *(int *)(param_1 + 0x68) * 2;
    if (*(int *)(param_1 + 0xb8) < iVar2) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    }
  }
  if (*(char *)(*(int *)(param_1 + 0xbc + (uint)*(byte *)(param_1 + 0x12) * 4) + 0xbe) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


