// undefined FUN_08069234(void)
// entry 0x8069234


undefined4 FUN_08069234(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0xb4);
  uVar3 = *(undefined4 *)(param_1 + 0xb8);
  uVar4 = *(undefined4 *)(param_1 + 0xbc);
  iVar5 = *(int *)(param_1 + 0xc0);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) | 1;
    iVar1 = DAT_080692f8;
    FUN_0801cf00(uVar2,*(undefined2 *)(DAT_080692f8 + 4));
    FUN_0801cf00(uVar3,*(undefined2 *)(iVar1 + 0xc));
    FUN_0801cf00(uVar4,*(undefined2 *)(iVar1 + 0x1c));
    FUN_0801cf00(iVar5,*(undefined2 *)(iVar1 + 0x28));
    *(undefined1 *)(param_1 + 199) = 0;
    *(undefined1 *)(param_1 + 0xc5) = 0;
    *(undefined2 *)(param_1 + 200) = *(undefined2 *)(param_1 + 0xa4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(uVar2);
  FUN_0801cff0(uVar3);
  FUN_0801cff0(uVar4);
  FUN_0801cff0(iVar5);
  FUN_0806a028(param_1,0x180);
  FUN_0806a5c8(param_1);
  FUN_0806a660(param_1);
  FUN_0806ad2c(param_1);
  if ((*(char *)(param_1 + 0xc5) == '\x01') || ((*(ushort *)(DAT_080692fc + 8) & 8) == 0)) {
    if ((int)*(short *)(param_1 + 0xa4) <= *(short *)(param_1 + 200) + -9) {
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


