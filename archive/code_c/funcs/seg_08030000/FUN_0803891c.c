// undefined FUN_0803891c(void)
// entry 0x803891c


undefined8 FUN_0803891c(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + DAT_08038930) == '\0') {
    if (*(char *)(param_1 + 199) == '\x02') {
      uVar2 = 0xb;
    }
    else if (*(char *)(param_1 + 199) == '\x01') {
      uVar2 = 10;
    }
    else {
      cVar1 = *(char *)(param_1 + 0xc5);
      if (cVar1 == '\x13') {
        if (((*(uint *)(param_1 + 0xc4) & DAT_08038968) == DAT_0803896c) &&
           ((*(uint *)(param_1 + 0xf0) & DAT_08038970) == 0)) {
          uVar2 = 0xc;
          goto LAB_08038982;
        }
      }
      else if (cVar1 != -1) {
        uVar2 = (uint)(byte)(cVar1 - 9);
        goto LAB_08038982;
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xd;
  }
LAB_08038982:
  return CONCAT44(in_lr,uVar2);
}


