// undefined FUN_080c68fc(void)
// entry 0x80c68fc


undefined4 FUN_080c68fc(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cff0(param_1);
    if ('\x02' < *(char *)(param_1 + 0x71)) {
      FUN_08005784(param_1 + 0x74,
                   (uint)*(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_080c693c) * 0x18 +
                   DAT_080c6940);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080c6974));
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    FUN_0801cff0(param_1);
  }
  else {
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c69a0);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    }
  }
  return in_lr;
}


