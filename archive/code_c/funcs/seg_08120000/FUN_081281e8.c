// undefined FUN_081281e8(void)
// entry 0x81281e8


void FUN_081281e8(byte param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  puVar1 = DAT_0812820c;
  puVar3 = DAT_08128214;
  if (param_1 == 2) {
LAB_08128226:
    *puVar3 = 8;
    puVar3 = puVar3 + 4;
  }
  else {
    puVar3 = DAT_08128234;
    if (2 < param_1) {
      if (param_1 == 3) {
        uVar2 = 0;
        puVar3 = DAT_08128220;
        goto LAB_0812822e;
      }
      goto LAB_08128226;
    }
    if (param_1 != 1) goto LAB_08128226;
    *DAT_0812820c = 8;
    puVar3 = puVar1 + 2;
  }
  uVar2 = 0x80;
LAB_0812822e:
  *puVar3 = uVar2;
  return;
}


