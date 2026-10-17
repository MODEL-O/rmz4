// undefined FUN_08093864(void)
// entry 0x8093864


undefined4 FUN_08093864(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_3c [3];
  short asStack_30 [6];
  byte abStack_24 [4];
  int local_20;
  int local_1c;
  
  local_3c[0] = *(undefined4 *)PTR_DAT_08093938;
  local_3c[1] = *(undefined4 *)(PTR_DAT_08093938 + 4);
  local_3c[2] = *(undefined4 *)(PTR_DAT_08093938 + 8);
  FUN_08129258(asStack_30,PTR_DAT_0809393c,0xc);
  FUN_08129258(abStack_24,PTR_DAT_08093940,3);
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar2 = (uint)*(byte *)(param_1 + 0xb8);
    iVar3 = uVar4 * 2;
    local_20 = *(int *)(param_1 + 0x54) + (iVar3 + -1) * (int)asStack_30[uVar2 * 2];
    local_1c = *(int *)(param_1 + 0x58) + (int)asStack_30[uVar2 * 2 + 1];
    uVar1 = (uint)abStack_24[uVar2];
    FUN_080a552c(&local_20,uVar1 + iVar3 * (0x140 - uVar1) & 0xff,uVar4);
    FUN_08005784(param_1 + 0x74,DAT_08093944);
    FUN_0801cf00(param_1,*(undefined2 *)(local_3c + uVar2));
    *(undefined1 *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  FUN_08094a38(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(byte *)(param_1 + 0x12) < 0x40)) {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


