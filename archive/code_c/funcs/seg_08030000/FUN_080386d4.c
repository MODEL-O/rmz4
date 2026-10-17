// undefined FUN_080386d4(void)
// entry 0x80386d4


undefined8 FUN_080386d4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + DAT_080386f0) & 0x8000) == 0) {
    iVar2 = 0x200;
    cVar1 = FUN_08038ad8(param_1);
    if (cVar1 != '\0') {
      iVar2 = 0x280;
    }
    if (*(byte *)(param_1 + 0x13e) == 0) {
      iVar2 = iVar2 >> *(sbyte *)(param_1 + 0x1ba);
    }
    else {
      iVar2 = ((int)((0x100 - (uint)*(byte *)(param_1 + 0x13e)) * iVar2) >> 8) >>
              *(sbyte *)(param_1 + 0x1ba);
    }
  }
  else {
    iVar2 = 0x200;
  }
  return CONCAT44(in_lr,iVar2);
}


