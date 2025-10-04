## CF-Package

Part of the CF-Whatever™ OS Series — Because why not.

---
# What is this?

CF-Package is a bundle of tools used in the CF-Whatever™ base system.
It’s not meant to be useful. It’s meant to exist beautifully.

Think of this like /usr/local/bin that got out of hand.

## What these tools do

| Tool        | Description                                                                 |
|-------------|-----------------------------------------------------------------------------|
| **cfmenu**  | A cursed text menu for basic system navigation. Basically your BIOS but worse. |
| **cupctl**  | A command-line utility to “fill your cup.” Does nothing useful, but it’s hilarious. |
| **flashlight** | A terminal-based “searchlight” utility for locating files in the system (also probably useless). |

---

## installation
1.compile

```bash
cc -Incurses [package name].c -o [package name]
```

2.move it to /use/local/bin and make it executeable
```bash
cp [package name after compile] /usr/local/bin
chmod +x [that package name]
```

---

License: MIT
© CF-Space 2025. “Because BSD wasn’t chaotic enough.”
