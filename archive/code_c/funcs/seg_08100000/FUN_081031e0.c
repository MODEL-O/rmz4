// undefined FUN_081031e0(void)
// entry 0x81031e0


undefined4 FUN_081031e0(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0xb4) * 4 + DAT_08103200));
LAB_08103282:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    if (*(char *)(param_1 + 0x71) == '\x02') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      FUN_08005760(param_1 + 0x74,(uint)*(byte *)(param_1 + 0xb4) * 0x18 + DAT_08103248,
                   param_1 + 0x54,0x80);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      uVar1 = 0x10;
LAB_08103280:
      *(undefined1 *)(param_1 + 0x12) = uVar1;
      goto LAB_08103282;
    }
  }
  else if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0xb4) * 4 + DAT_081032ac + 2));
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    uVar1 = 0xff;
    goto LAB_08103280;
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(DAT_081032ec + DAT_081032f0);
    FUN_0801cff0(param_1);
    return in_lr;
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    cVar2 = *(char *)(param_1 + 0xb4);
    if (cVar2 == '\x03') {
      *(char *)(param_1 + 0xb4) = '\0';
      goto LAB_081032c6;
    }
    cVar2 = cVar2 + '\x01';
  }
  else {
    cVar2 = *(char *)(param_1 + 0xb4);
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xb4) = '\x03';
      goto LAB_081032c6;
    }
    cVar2 = cVar2 + -1;
  }
  *(char *)(param_1 + 0xb4) = cVar2;
LAB_081032c6:
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


