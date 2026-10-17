// undefined FUN_080c2d5c(void)
// entry 0x80c2d5c


undefined4 FUN_080c2d5c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  byte abStack_2c [4];
  undefined4 local_28 [2];
  
  local_28[1] = DAT_080c2da0[1];
  local_28[0] = *DAT_080c2da0;
  FUN_08129258(abStack_2c,DAT_080c2da4,2);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xa6);
    for (iVar3 = 0; iVar3 < (int)(uint)abStack_2c[uVar4]; iVar3 = iVar3 + 1) {
      uVar1 = FUN_08128fb8(iVar3 << 8);
      iVar2 = FUN_080c298c(param_1,param_1 + 0x54,uVar4,uVar1);
      if (iVar2 == 0) break;
      *(char *)(param_1 + 0xb5) = *(char *)(param_1 + 0xb5) + '\x01';
    }
    FUN_0801cf00(param_1,*(undefined2 *)(local_28 + uVar4));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


