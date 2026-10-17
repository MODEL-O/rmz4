// undefined FUN_08000a10(void)
// entry 0x8000a10


void FUN_08000a10(void)

{
  int iVar1;
  undefined1 local_4 [4];
  
  (*(int *)0x04000204) = (short)0x000045b7;
  iVar1 = 0x040000d4;
  *(undefined1 **)0x040000d4 = local_4;
  *(undefined4 *)(iVar1 + 4) = 0x3000000;
  *(undefined4 *)(iVar1 + 8) = 0x85001f80;
  *(undefined1 **)iVar1 = local_4;
  *(undefined4 *)(iVar1 + 4) = 0x2000000;
  *(undefined4 *)(iVar1 + 8) = 0x85010000;
  iVar1 = 0x03000380;
  *(undefined2 *)(0x03000380 + 0x00001202) = 0;
  *(undefined2 *)(iVar1 + 0x1200) = 0;
  return;
}


