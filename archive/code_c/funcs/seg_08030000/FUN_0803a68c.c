// undefined FUN_0803a68c(void)
// entry 0x803a68c


undefined8 FUN_0803a68c(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf3);
  if (((bVar1 == 2) || (bVar1 == 7)) || ((*(char *)(param_1 + 199) == '\x02' && (1 < bVar1)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}


