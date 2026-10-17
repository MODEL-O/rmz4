// undefined FUN_0802b63c(void)
// entry 0x802b63c


undefined8 FUN_0802b63c(int param_1,short param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_0802b664;
  if (*(ushort *)(param_1 + 0xba) <= DAT_0802b664) {
    *(ushort *)(param_1 + 0xba) = param_2 + *(ushort *)(param_1 + 0xba);
    FUN_08002b10(0x22);
    if (*(ushort *)(param_1 + 0xba) <= uVar1) {
      uVar2 = 1;
      goto LAB_0802b66c;
    }
    *(short *)(param_1 + 0xba) = (short)uVar1;
  }
  uVar2 = 0;
LAB_0802b66c:
  return CONCAT44(in_lr,uVar2);
}


