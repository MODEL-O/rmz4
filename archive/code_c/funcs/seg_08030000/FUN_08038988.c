// undefined FUN_08038988(void)
// entry 0x8038988


undefined4 FUN_08038988(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) &&
     ((*(char *)(param_1 + 0x94) == '\0' || (*(char *)(param_1 + 0x176) != '\0')))) {
    if (*(char *)(param_1 + 199) == '\x03') {
      FUN_0801ebd0(4);
      FUN_080061ec(param_1 + 0x74,4);
    }
    else {
      cVar1 = *(char *)(param_1 + 0xc5);
      if (cVar1 == '\r') {
        FUN_0801ebd0(10);
        FUN_080061ec(param_1 + 0x74,10);
      }
      else if (cVar1 == '\x0e') {
        FUN_0801ebd0(8);
        FUN_080061ec(param_1 + 0x74,8);
      }
      else if (cVar1 == '\x0f') {
        FUN_0801ebd0(6);
        FUN_080061ec(param_1 + 0x74,6);
      }
      else {
        *(short *)(param_1 + 0xa4) = 0;
      }
    }
    *(byte *)(param_1 + 0x142) =
         *(byte *)(param_1 + 0x142) & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


