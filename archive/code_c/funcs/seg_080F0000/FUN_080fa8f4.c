// undefined FUN_080fa8f4(void)
// entry 0x80fa8f4


undefined4 FUN_080fa8f4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar3 = *(int *)(param_1 + 0x2c);
  if ((*(char *)(iVar2 + 8) == '\x03') && (*(char *)(iVar2 + 9) == '@')) {
    *(undefined1 *)(iVar3 + 0xbe) = 1;
  }
  if (((*(char *)(iVar2 + 8) == '\0') && (*(int *)(iVar2 + 0x58) < *(int *)(iVar3 + 0x58))) &&
     (*(char *)(iVar2 + DAT_080fa984) != '\0')) {
    *(undefined1 *)(iVar3 + 0xbe) = 1;
  }
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(bool *)(iVar3 + 0xbc) = *(int *)(iVar3 + 0x54) < *(int *)(iVar2 + 0x54);
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (*DAT_080fa988 != 0)) {
      uVar1 = FUN_0803a578(*DAT_080fa988,3,0x10);
      *(undefined1 *)(iVar3 + 0xbd) = uVar1;
    }
  }
  return in_lr;
}


