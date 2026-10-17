// undefined FUN_08000b30(void)
// entry 0x8000b30


void FUN_08000b30(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  if ((param_3 & 0xfffffffe) != 0) {
    uVar1 = param_1 & 0xfffffffe;
    uVar2 = param_2 & 0xfffffffe;
    if (((param_1 & 2) == 0) && ((param_2 & 2) == 0)) {
      if (((param_3 & 0xfffffffe) < 0x20) ||
         (FUN_08128be0(uVar1,uVar2,(param_3 & 0xffffffe0) >> 2 & DAT_08000ba4),
         (param_3 & 0x1e) != 0)) {
        FUN_08128be4(uVar1 + (param_3 & 0xffffffe0),uVar2 + (param_3 & 0xffffffe0),
                     (param_3 & 0x1e) >> 1);
      }
    }
    else {
      FUN_08128be4(uVar1,uVar2,(param_3 & 0x3ffffe) >> 1);
    }
  }
  return;
}


