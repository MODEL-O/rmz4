// undefined FUN_080303cc(void)
// entry 0x80303cc


undefined4 FUN_080303cc(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + DAT_080303e8) != '\0') {
    uVar2 = 7;
    goto LAB_0803058e;
  }
  if (*(ushort *)(param_1 + 0xe) == DAT_08030460) {
    return in_lr;
  }
  puVar4 = (uint *)(param_1 + (DAT_08030460 - 0xaa));
  if ((*puVar4 & 1) != 0) {
    if (*(byte *)(param_1 + 0xf) < 4) {
      cVar3 = FUN_0802c7b4(param_1,(uint)*(byte *)(param_1 + 0x174) * 8 + DAT_08030464,0);
      if (cVar3 == '\0') {
        if (((*(char *)(param_1 + 0xc6) == '\x16') &&
            ((*(ushort *)(param_1 + DAT_080304b0) & 0x8000) == 0)) &&
           ((*(byte *)(param_1 + 0x142) & 8) != 0)) {
          *(undefined1 *)(param_1 + 0xd) = 1;
          *(undefined1 *)(param_1 + 0xe) = 0;
          *(undefined1 *)(param_1 + 0xf) = 0;
          goto LAB_08030506;
        }
        goto LAB_080304b4;
      }
      if (*(int *)(param_1 + 0x108) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
        *(undefined4 *)(param_1 + 0x108) = 0;
      }
      bVar1 = cVar3 - 1U & 1;
      *(byte *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      if (bVar1 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      uVar2 = 3;
LAB_08030504:
      *(undefined1 *)(param_1 + 0xf) = uVar2;
LAB_08030506:
      FUN_080383f0(param_1);
      return in_lr;
    }
LAB_080304b4:
    if ((((*(char *)(param_1 + 0xe) == '\x01') && (*(byte *)(param_1 + 0xf) < 5)) ||
        ((*(char *)(param_1 + 0xe) == '\x02' && (*(byte *)(param_1 + 0xf) < 2)))) &&
       (((*(ushort *)(param_1 + DAT_08030510) & 0x8000) == 0 &&
        (*(char *)(param_1 + 0xc6) == '\x15')))) {
      bVar1 = *(byte *)(param_1 + 0x142);
      if ((bVar1 & 2) == 0) {
        *(byte *)(param_1 + 0x142) = bVar1 | 2;
        uVar2 = 1;
        *(undefined1 *)(param_1 + 0xd) = 1;
        *(byte *)(param_1 + 0xe) = bVar1 & 2;
        goto LAB_08030504;
      }
    }
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    if (((*(byte *)(param_1 + 0xf) < 5) && (*(byte *)(param_1 + 0xf) != 2)) && ((*puVar4 & 2) == 0))
    {
      *(undefined1 *)(param_1 + 0xe) = 2;
      *(undefined1 *)(param_1 + 0xf) = 0;
      return in_lr;
    }
  }
  else if ((*(char *)(param_1 + 0xe) == '\x02') &&
          (cVar3 = FUN_0802c5f8(param_1,(uint)*(byte *)(param_1 + 0x174) * 8 + DAT_08030560,0),
          cVar3 != '\0')) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  if ((*(char *)(param_1 + 0xe) == '\x01') && (3 < *(byte *)(param_1 + 0xf))) {
    return in_lr;
  }
  if ((*puVar4 & 0x40) == 0) {
    return in_lr;
  }
  cVar3 = FUN_0802ca64(param_1,0);
  if (cVar3 == '\0') {
    return in_lr;
  }
  uVar2 = 3;
LAB_0803058e:
  *(undefined1 *)(param_1 + 0xd) = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


