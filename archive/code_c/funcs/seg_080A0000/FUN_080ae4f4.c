// undefined FUN_080ae4f4(void)
// entry 0x80ae4f4


undefined4 FUN_080ae4f4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cc9c();
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0801cf00(param_1,DAT_080ae56c);
    FUN_08005784(param_1 + 0x74,DAT_080ae570);
    *(undefined1 *)(param_1 + 0x12) = 0xc;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + DAT_080ae574;
  *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + DAT_080ae578;
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (0xc < bVar1) {
    if (*(byte *)(param_1 + 0x13) < 4) {
      FUN_080ae140(iVar2,*(char *)(param_1 + 0x13) * -0x10 + '`');
      *(undefined1 *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    }
    else {
      *(undefined1 *)(param_1 + 0xbe) = 0x20;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    FUN_08002b10(DAT_080ae5a4);
  }
  return in_lr;
}


