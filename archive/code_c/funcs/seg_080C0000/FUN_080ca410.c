// undefined FUN_080ca410(void)
// entry 0x80ca410


undefined8 FUN_080ca410(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0xb6);
  if (*pcVar1 == -1) {
    iVar3 = *(int *)(*DAT_080ca44c + 0x54);
    if ((*(int *)(param_1 + 0x54) + DAT_080ca450 < iVar3) &&
       (iVar3 < *(int *)(param_1 + 0x54) + 0x500)) {
      if (*(int *)(param_1 + 0x58) < *(int *)(*DAT_080ca44c + 0x58)) {
        *pcVar1 = '\x01';
      }
      else {
        *pcVar1 = '\0';
      }
      uVar2 = 1;
      goto LAB_080ca460;
    }
  }
  uVar2 = 0;
LAB_080ca460:
  return CONCAT44(in_lr,uVar2);
}


