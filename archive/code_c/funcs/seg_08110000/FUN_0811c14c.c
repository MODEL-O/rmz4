// undefined FUN_0811c14c(void)
// entry 0x811c14c


undefined4 FUN_0811c14c(int param_1)

{
  ushort uVar1;
  char *pcVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + DAT_0811c164) == '\0') {
    uVar1 = *DAT_0811c168 + 0x10;
    puVar3 = DAT_0811c168;
  }
  else {
    uVar1 = *DAT_0811c190 - 0x10;
    puVar3 = DAT_0811c190;
  }
  *puVar3 = uVar1;
  *puVar3 = (ushort)DAT_0811c194 & *puVar3;
  pcVar2 = (char *)(param_1 + DAT_0811c198);
  if (*pcVar2 == '\0') {
    uVar1 = *puVar3 + 0x20;
  }
  else {
    uVar1 = *puVar3 - 0x20;
  }
  if ((uVar1 & 0xff) == 0) {
    *(undefined1 *)(param_1 + DAT_0811c1d0 + 1) = 1;
  }
  if ((char)*puVar3 == '\0') {
    *(char *)(param_1 + DAT_0811c1d4) = *pcVar2;
    *(undefined1 *)(param_1 + 2) = 1;
    FUN_0811c1d8(param_1);
  }
  return in_lr;
}


