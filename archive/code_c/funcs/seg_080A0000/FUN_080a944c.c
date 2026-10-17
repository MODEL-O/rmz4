// undefined FUN_080a944c(void)
// entry 0x80a944c


undefined4 FUN_080a944c(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(byte *)(iVar3 + 0xe1) == (*(byte *)(param_1 + 0x10) & 1)) {
      FUN_0801cf00(param_1,DAT_080a94f8);
    }
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == DAT_080a94f8) &&
     (*(short *)(iVar3 + 0xdc) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if ((bVar1 & 0x3f) == 0) {
      FUN_08002b10(0x2c);
      uVar2 = FUN_08128bdc((*(int *)(param_1 + 0x54) - *(int *)(*DAT_080a94fc + 0x54)) * 0x100 >>
                           0x10,((*(int *)(param_1 + 0x58) + 0xf00) - *(int *)(*DAT_080a94fc + 0x58)
                                ) * 0x100 >> 0x10);
      FUN_080bd4d4(param_1 + 0x54,0x300,(uVar2 & 0xffff) >> 8);
    }
  }
  if (*(char *)(iVar3 + 0xd) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


