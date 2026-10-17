// undefined FUN_0810aa28(void)
// entry 0x810aa28


undefined4 FUN_0810aa28(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + DAT_0810aa54);
  *(uint *)(param_1 + 0x54) = ((*(byte *)(param_1 + 0x11) & 3) * 0x18 + 0x80) * 0x100;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    uVar1 = 0x3800;
  }
  else {
    uVar1 = 0x3000;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  if (3 < *(byte *)(param_1 + 0x11)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1000;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x11);
  if ((int)((uint)*(ushort *)(iVar3 + 200) & 1 << uVar2) >> uVar2 == 0) {
    FUN_0801cf00(param_1,*(undefined2 *)(uVar2 * 2 + DAT_0810aabc));
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  else {
    FUN_0801cf00(param_1,*(undefined2 *)(uVar2 * 2 + DAT_0810aa9c));
    *(undefined1 *)(param_1 + 0x22) = 0;
  }
  return in_lr;
}


