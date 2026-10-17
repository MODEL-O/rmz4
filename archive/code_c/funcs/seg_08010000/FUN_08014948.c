// undefined FUN_08014948(void)
// entry 0x8014948


undefined8 FUN_08014948(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(DAT_08014980 + DAT_08014984) & 0xf) == 1) {
    iVar2 = *param_1;
    if ((((uint)(iVar2 + DAT_08014988) <= DAT_0801498c) ||
        ((uint)(iVar2 + DAT_08014990) <= DAT_0801498c)) ||
       ((uint)(iVar2 + DAT_08014994) <= DAT_08014998)) {
      uVar1 = 1;
      goto LAB_080149fa;
    }
    if ((uint)(iVar2 + DAT_080149ac) <= DAT_080149b0) {
      uVar1 = 2;
      goto LAB_080149fa;
    }
  }
  iVar2 = *param_1;
  if ((DAT_080149d4 < (uint)(iVar2 + DAT_080149d0)) && (DAT_080149dc < (uint)(iVar2 + DAT_080149d8))
     ) {
    if (DAT_080149f4 < (uint)(iVar2 + DAT_080149f0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 4;
    }
  }
  else {
    uVar1 = 3;
  }
LAB_080149fa:
  return CONCAT44(in_lr,uVar1);
}


