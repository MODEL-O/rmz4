// undefined FUN_08122cd0(void)
// entry 0x8122cd0


undefined8 FUN_08122cd0(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 in_lr;
  
  iVar2 = DAT_08122d1c;
  iVar1 = DAT_08122d18;
  if (*DAT_08122ce0 == '\x01') {
    cVar3 = '\0';
  }
  else {
    cVar3 = DAT_08122ce0[0x1e];
  }
  if (cVar3 == 1) {
    FUN_08128be0(DAT_08122d18,DAT_08122d1c,0x50);
    FUN_08128be4(iVar1 + 0x140,iVar2 + 0x140,DAT_08122d20);
  }
  return CONCAT44(in_lr,(int)cVar3);
}


