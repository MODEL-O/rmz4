// undefined FUN_0812763c(void)
// entry 0x812763c


void FUN_0812763c(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  
  param_2[0x16] = 0;
  param_2[0x1a] = 0;
  if (param_2[0x18] == 0) {
    bVar1 = 0xc;
  }
  else {
    bVar1 = 3;
  }
  *param_2 = *param_2 | bVar1;
  return;
}


