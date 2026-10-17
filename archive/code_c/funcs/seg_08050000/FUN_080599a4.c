// undefined FUN_080599a4(void)
// entry 0x80599a4


undefined1 FUN_080599a4(int param_1)

{
  undefined4 local_8 [2];
  
  local_8[0] = *DAT_080599c4;
  local_8[1] = DAT_080599c4[1];
  return *(undefined1 *)(local_8 + (*(byte *)(param_1 + 10) >> 4 & 1));
}


