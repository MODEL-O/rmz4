// undefined FUN_0800694c(void)
// entry 0x800694c


undefined4 FUN_0800694c(void)

{
  undefined4 uVar1;
  uint uVar2;
  uVar2 = 0;
  do {
    if (((int)(uint)*(byte *)(((int)(uVar2 + 4) >> 3) + DAT_0800696c) >> (uVar2 + 4 & 7) & 1U) == 0)
    {
      uVar1 = 0;
      goto LAB_0800697c;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x60);
  uVar1 = 1;
LAB_0800697c:
  return uVar1;
}


