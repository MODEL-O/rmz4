// undefined FUN_081189ac(void)
// entry 0x81189ac


undefined4 FUN_081189ac(int param_1)

{
  ushort uVar1;
  char *pcVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + DAT_081189c4) == '\x01') {
    uVar1 = *DAT_081189c8 + 0x10;
    puVar3 = DAT_081189c8;
  }
  else {
    uVar1 = *DAT_08118a00 - 0x10;
    puVar3 = DAT_08118a00;
  }
  *puVar3 = uVar1;
  *puVar3 = (ushort)DAT_08118a04 & *puVar3;
  pcVar2 = (char *)(param_1 + DAT_08118a0c);
  if (*pcVar2 == '\x01') {
    if ((*puVar3 + 0x20 & 0xff) == 0) {
      *(undefined1 *)(param_1 + DAT_08118a08 + 2) = 1;
    }
  }
  else if ((*puVar3 - 0x20 & 0xff) == 0) {
    *(undefined1 *)(param_1 + DAT_08118a08 + 2) = 1;
  }
  if ((char)*puVar3 == '\0') {
    *(char *)(param_1 + DAT_08118a40) = *pcVar2;
    *(undefined1 *)(param_1 + 2) = 1;
    FUN_08118a44(param_1);
  }
  return in_lr;
}


