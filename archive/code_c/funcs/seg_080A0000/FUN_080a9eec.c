// undefined FUN_080a9eec(void)
// entry 0x80a9eec


undefined4 FUN_080a9eec(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080a9fb4 + (uint)*(byte *)(param_1 + 0xbc) & 0xffff);
    *(undefined1 *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x70) & DAT_080a9fb8) == DAT_080a9fbc) {
    FUN_080ccf4c(param_1 + 0x54,0);
    FUN_08002b10(DAT_080a9fc0);
  }
  if ((*(char *)(param_1 + 0xb5) == '\x02') && ((*(byte *)(param_1 + 0x12) & 1) == 0)) {
    piVar3 = (int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *piVar3;
    iVar2 = *piVar3 * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *piVar3 = iVar2 >> 8;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    FUN_0801cf00(param_1,DAT_080a9fc4 + (uint)*(byte *)(param_1 + 0xbc) & 0xffff);
  }
  cVar1 = FUN_080a9cac(param_1);
  if (cVar1 != '\0') {
    FUN_0801cf00(param_1,DAT_080a9fc4 + (uint)*(byte *)(param_1 + 0xbc) & 0xffff);
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


