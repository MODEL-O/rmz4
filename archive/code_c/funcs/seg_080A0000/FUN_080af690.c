// undefined FUN_080af690(void)
// entry 0x80af690


undefined4 FUN_080af690(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0xb5) = 4;
    FUN_08002b10(0x170);
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xd) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xe) = 0;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x13) == *(char *)(param_1 + 0xb5)) {
    FUN_0801cf00(param_1,CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) +
                         2);
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    cVar1 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\x05') {
      *(char *)(param_1 + 0xb5) = '\x02';
    }
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  if (DAT_080af76c <
      (int)(uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70))) {
    FUN_0801cf00(param_1,*(byte *)(param_1 + 0x11) | 0xa300);
  }
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  sVar2 = FUN_08007c7c(iVar3,*(undefined4 *)(param_1 + 0x58));
  if ((sVar2 != 0) && (sVar2 != 0xf)) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080af770);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  }
  if (*(char *)(param_1 + 0x12) == '\n') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


